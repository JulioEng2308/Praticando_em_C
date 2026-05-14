package main
import "fmt"

func main () {
  var maisvot int
  var segunvot int
  var menosvot int
  var votvalido int

  fmt.Scan(&maisvot)
  fmt.Scan(&segunvot)
  fmt.Scan(&menosvot)

  votvalido = maisvot + segunvot + menosvot

  if (maisvot > votvalido / 2) {
      fmt.Print("NAO")
  } else {
      fmt.Print("SIM")
  }
  
  
}