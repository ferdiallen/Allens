package Obj

abstract class abstarct {
    abstract var identity:String
    abstract var password: String
    abstract fun result()
}

interface MoveLeft{
    fun move(name:String) = println("Move to the left $name")
}
interface MoveRight{
    fun move(name:String) = println("Move to the Right $name")
}
class manager(user:String, passwords:String) : abstarct(),MoveLeft,MoveRight{
    override var identity: String = user
        set(value) {
            if (value.isNotBlank()) {
                field = value
            }
        }
    override var password: String = passwords
    set(value) {
        if(value.isNotBlank()){
            field=value
        }
    }


    override fun result() {
        if(identity.isNotBlank()){
            println("Data berhasil dimasukkan ! : $identity")
        }else{
            println("Error")
        }
   if(password.isNotBlank()){
       println("Password mu adalah : $password")
   }else
       println("Value kosong")
    }

    override fun move(name: String) {
        super<MoveLeft>.move(name)
        super<MoveRight>.move(name)
    }
}
