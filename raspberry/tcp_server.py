import socket

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to a specific address and port
server_socket.bind(('158.39.162.172', 8080))  # Use your Raspberry Pi's IP address

# Listen for incoming connections
server_socket.listen(5)  # Allow up to 5 simultaneous connections

print("Server is listening for incoming connections...")

while True:
    # Accept a connection from a client
    client_socket, client_address = server_socket.accept()
    print(f"Connection from: {client_address}")

    while True:
        # Receive data
        data = client_socket.recv(1024)
        if not data:
            break  # No more data, close the connection

        print(f"Received data: {data.decode('utf-8')}")

        # Send a response
        response = "Hello from the Raspberry Pi!"
        client_socket.send(response.encode('utf-8'))

    # Close the client socket after communication
    client_socket.close()
