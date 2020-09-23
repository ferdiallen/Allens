package Main

import Obj.Inss
import Obj.manager

fun printOBJ(apa:Any) {
  if(apa is Inss.Insert){
   println("This is String and the result is : ${apa}")
  }else if (apa is Inss.Intejer){
  println(apa)
  }else{
   println(apa)
  }
 }



fun main(){
 val manager = manager("Allen","12345")
    manager.result()
    manager.move(manager.identity)
}