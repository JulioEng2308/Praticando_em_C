package main
import "fmt"

func main () {
  var num int
  var produtos int
  var fat int 

  fat = 1

  fmt.Scan(&num)
  if num < 0 {
      num = 0
      fmt.Print("Fatorial de 0:",num)
  }

  for produtos = 1; produtos <= num; produtos++ {
      fat = fat * produtos
  }

  fmt.Print("Fatorial de ",num,": ", fat)
}