package main
import "fmt"

func main () {
  var alturapro float64
  var alturaamg float64

  fmt.Scan(&alturapro)
  fmt.Scan(&alturaamg)
  
  
  if alturapro >= 1.37 || alturaamg >= 1.37 {
      fmt.Println("Sim")
  } else {
      fmt.Println("Nao")
  }

  if alturapro > alturaamg {
      fmt.Println(alturapro)
  } else {
      fmt.Println(alturaamg)
  }
}