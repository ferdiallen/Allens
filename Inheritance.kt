package com.company

class Inheritance {
    open class Greetings(val name:String){
        fun greet(name:String){
            println("Halo $name ini adalah ${this.name}")
        }
       final class feedback(name:String):Greetings(name)
    }
}