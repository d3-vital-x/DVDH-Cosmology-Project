import requests
import json

def fetch_event(event_id):
    url = f"https://earthquake.usgs.gov/fdsnws/event/1/query?eventid={event_id}&format=geojson"
    r = requests.get(url)
    data = r.json()

    with open(f"{event_id}_raw.json", "w") as f:
        json.dump(data, f, indent=4)

    print(f"[OK] Saved {event_id}_raw.json")

# Example (Replace with real event ID)
fetch_event("ak0000000")
