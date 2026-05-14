package main
import "fmt" 
import "math"

func main () {
  var velini float64
  var angulo float64
  var dist float64
  var rad float64
  var alcance float64

  fmt.Scan(&velini)
  fmt.Scan(&angulo)
  fmt.Scan(&dist)

  rad = angulo * (math.Pi / 180)
  alcance = math.Pow(velini,2.0) * math.Sin(2.0 * rad) / 9.8
  

  if math.Abs(dist - alcance) < 0.1 {
    fmt.Println("sim")
  } else {
    fmt.Println("nao")
  }

  
}