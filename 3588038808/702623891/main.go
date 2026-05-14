package main

import "fmt"

func main () {
    var anos float32
    var meses float32

  fmt.Println("Escreva a idade")
  fmt.Scanln(&anos,&meses)

  if anos >= 0 && anos <= 9.12 && meses <= 0.12 {
       fmt.Println("infancia")    
   } else if anos >= 10.0 && anos <= 14.11 {
       fmt.Println("pre-adolescencia")
   } else if anos >=15.0 && anos <= 19.11{
       fmt.Println("Adolescencia")
   } else if anos >= 20.0 && anos <= 24.11 {
       fmt.Println("juventude")
   }
}
