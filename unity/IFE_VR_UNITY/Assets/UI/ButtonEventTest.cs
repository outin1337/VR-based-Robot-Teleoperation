using UnityEngine;
using UnityEngine.EventSystems;

namespace Robot
{
    public class ButtonEventTest : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
    {
        public void OnPointerClick(PointerEventData eventData)
        {
            UIManager.ToggleAxis(gameObject.name);

        }
        }
    }
}
