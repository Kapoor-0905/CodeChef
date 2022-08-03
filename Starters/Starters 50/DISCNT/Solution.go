package main

import "fmt"
func main(){
  var t,x int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scanln(&x)
    fmt.Println(100-x)
  }
}
