import json
f=open('details.json')
data=json.load(f)
D={}
check=input("Enter stop name ")
for i in data:
    route_no=i['route_no']
    stops=i['map_json_content']
    D[route_no]=stops
    for i in range(len(stops)):
        if (check == stops[i]['stop_name']):
            print("Stop found at route number ",route_no)



