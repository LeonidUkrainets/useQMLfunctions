import QtQuick 2.0

Item {
    function myQmlFunction(msg: string) : string {
        console.log("Прийшло повідомлення:", msg)
        return "щось можна повернути"
    }
}

