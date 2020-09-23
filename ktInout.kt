package com.company

import java.io.BufferedReader
import java.io.ByteArrayInputStream
import java.io.InputStreamReader

class ktInout {

 companion object{
     fun Readin() {
        val input:String=""
                val stream= ByteArrayInputStream(input.toByteArray())
         val sb= StringBuilder()
         var line:String?
       val br = BufferedReader(InputStreamReader(stream))
         line = br.readLine()
         while(line!=null){
             sb.append(line)
             line=br.readLine()
         }
         br.close()
     }
 }
}