package main
import "fmt"

func main() {
  var x0 float32
  var y0 float32
  var x1 float32
  var y1 float32
  var x2 float32
  var y2 float32
  var pc float32
  
  fmt.Scanln(&x0)
  fmt.Scanln(&y0)
  fmt.Scanln(&x1)
  fmt.Scanln(&y1)
  fmt.Scanln(&x2)
  fmt.Scanln(&y2)

  pc = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0)

  if pc < 0 {
     fmt.Println("A direita da reta")
  } else {
       if pc > 0 {
          fmt.Println("A esquerda da reta")
       } else {
           if pc == 0 {
             fmt.Println("Sobre a reta")
           }
       }
  }
}