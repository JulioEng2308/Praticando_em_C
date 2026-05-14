package main
import "fmt"

func main () {
  var a float32
  var b float32
  var c float32
  var d float32

  fmt.Scanln(&a)
  fmt.Scanln(&b)
  fmt.Scanln(&c)
  fmt.Scanln(&d)

  if (b < a) || (d < c) {
      fmt.Println("Entradas invalidas")
  } else {
        if (b < c) || (d < a) {
           fmt.Println("Nao ha intersecao") 
        } else {
            fmt.Println("Ha intersecao")
        }
  }
}
  

