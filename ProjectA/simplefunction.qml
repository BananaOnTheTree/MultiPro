import QtQuick 2.0

Rectangle {
    width: 200
    height: 200

    function incrementX() {
        var x = 0, arr = [1, 2];
        x += 1;
        console.log("Value of x: " + x);
    }

    function callIncrementX() {
        incrementX();
    }

    Component.onCompleted: callIncrementX()
}