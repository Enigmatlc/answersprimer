//Exercise 13.33: Why is the parameter to the save and remove members
//of Message a Folder & ? Why didn’t we define that parameter as Folder ?
//Or const Folder & ?
//because the call will be changing the contents in the object the .addMsg(this) call will probably use the this from the caller to undate the fater and insert the message if the parameter is constant or a non reference it would not allow us to do this.