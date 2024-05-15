import socket
import json

def clear_screen():
    """Clear the console for a better user experience."""
    print("\n" * 100)

def print_welcome_message():
    """Displays a welcome message when the program starts."""
    clear_screen()
    print("=====================================")
    print(" Stepper Motor Control Client")
    print("=====================================\n")
    print("Instructions:")
    print(" - Enter commands to specify the target position for each axis.")
    print(" - The format for the rotate command is now to specify the target orientation for each axis directly.")
    print("   Examples:")
    print("       rotate X 90 Y 45 Z 180")
    print("       This will move the X axis to 90°, Y axis to 45°, and Z axis to 180° from the zero point.")
    print(" - 'calibrate' will set the current position of all axes as the new zero point.")
    print(" - 'gotozero' will move all axes back to the zero point.")
    print(" - Type 'exit' to quit the program.\n")

def command_to_json(raw_cmd):
    """Translates command syntax to JSON for target orientation."""
    if raw_cmd.lower() == "exit":
        return {"command": "exit"}
    elif raw_cmd.lower().startswith("calibrate"):
        return {"command": "calibrate"}
    elif raw_cmd.lower().startswith("gotozero"):
        return {"command": "gotozero"}

    parts = raw_cmd.lower().split(maxsplit=1)
    if parts[0] == "rotate" and len(parts) == 2:
        try:
            positions = []
            for part in parts[1].split():
                axis_target = part.strip().split()
                if len(axis_target) == 2:
                    axis, target_position = axis_target
                    if axis.upper() in ['X', 'Y', 'Z'] and target_position.isdigit():
                        positions.append({"axis": axis.upper(), "target_position": int(target_position)})
            return {"command": "rotate", "positions": positions}
        except ValueError:
            return {"command": "invalid"}
    return {"command": "invalid"}

def send_command(s, cmd):
    """Sends a command to the server and receives a response."""
    s.sendall(json.dumps(cmd).encode('utf-8'))
    response = json.loads(s.recv(1024).decode('utf-8'))
    if response["status"] == "success":
        print("\nServer response:", response["message"])
        print("Current positions:", response["current_position"], "\n")
    else:
        print("\nServer response: Error -", response["message"], "\n")

def send_commands(host, port):
    """Attempts to connect to the server and send commands."""
    try:
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.connect((host, port))
            print("Connected to the server. Ready to send commands.")
            print("------------------------------------------------")

            while True:
                raw_cmd = input("> ").strip()
                cmd_json = command_to_json(raw_cmd)
                if cmd_json["command"] == "exit":
                    print("\nExiting program. Goodbye!")
                    break
                elif cmd_json["command"] == "invalid":
                    print("Invalid command. Please try again.")
                    continue
                send_command(s, cmd_json)
    except socket.error as e:
        print(f"Connection error: {e}")

def main():
    print_welcome_message()
    host = input("Enter server IP: ").strip()
    port = int(input("Enter server port: ").strip())
    send_commands(host, port)

if __name__ == "__main__":
    main()
