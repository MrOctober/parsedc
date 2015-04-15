// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.


var parseDC = require('com.dcgov.parsedc');
    
    

	// To enable Android Push Notifications
	parseDC.enablePush();

	// Subscribe  to Parse Channels
    parseDC.subscribeChannel('DCOA');



   // unSubscribe
   //  Parse.unsubscribeChannel('user_123');