import json

def response_file():
    f = open('response_clean.json')
    data = json.load(f)
    return data['value']

def binary_search(start, end, stop_id, stops=response_file()):
    if end > start:
        mid = start + (end - start)//2
        if int(stops[mid]["BusStopCode"]) == int(stop_id):
            return mid

        elif int(stops[mid]["BusStopCode"]) < int(stop_id):
            return binary_search(start = mid+1, end = end, stop_id = int(stop_id), stops = stops)

        elif int(stops[mid]["BusStopCode"]) > int(stop_id):
            return binary_search(start = start, end = mid - 1, stop_id = int(stop_id), stops = stops)
    else:
        return -1

def bus_stops_names():
    f = open('bus_stops.json',)
    data = json.load(f)
    stops = response_file()
    for d in data:
        for i in data[d]:
            for j in i:
                print(binary_search(start = 0, end = len(stops)-1, stop_id = j, stops = stops))
bus_stops_names()
