# Qt Croatie Proect

The main goal of this Qt App is to control switches and lights in a house.

## Main features

### Request HTTP Server

The app should include a http client in order to request the existing http server and get back the house current state (rooms, swicth and lights states, connexion between switch and lights, etc...).

### Parse a json file

All information are stored in a json file in the server. 
Once the http client has got the json back from the server, the app should parse this file and save information.

### Display current house state

For each room, the app should display the current state of all lights and all switches.

### Control the house 

As the user can see in real time his house state, he should be able to control switches through the app.
That is to say, each swicth of each room does have an action that needs to be sent back to the server.

### Send actions to servers

Every time users act on switches, a new json file (with complete house current state) is created and sent back to http server.
