package main 
import "fmt"

func main () {
  var coefA float64
  var coefB float64
  var coefD float64
  var coefE float64
  var resultC float64
  var resultF float64
  var valX float64
  var valY float64

  fmt.Scan(&coefA)
  fmt.Scan(&coefB)
  fmt.Scan(&resultC)
  fmt.Scan(&coefD)
  fmt.Scan(&coefE)
  fmt.Scan(&resultF)
  
  valX = (resultC * coefE - coefB * resultF) / (coefA * coefE - coefB * coefD)
  valY = (coefA * resultF - resultC * coefD) / (coefA * coefE - coefB * coefD)

  if (coefA * coefE - coefB * coefD) == 0 || (coefA * coefE - coefB * coefD) == 0 {
      fmt.Println("Nao tem solucao")
  } else {
      fmt.Println(valX)
      fmt.Println(valY)
  }
}