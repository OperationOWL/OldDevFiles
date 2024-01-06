import json
file=open('details.json')
data=json.load(file)
busDetails={}
for i in data:
    route_no=str(i['route_no'])
    stops=i['map_json_content']
    busDetails[route_no]=stops

def getBusStops(bus_route):
    '''This function gives all bus stops of a given route'''
    busStops=[]
    for i in busDetails[bus_route]:
        busStops.append(i['stop_name'])
    return busStops

bus_route=input('Enter the bus route')
busStops=getBusStops(bus_route)
for stop in busStops:
    print(stop)

    
