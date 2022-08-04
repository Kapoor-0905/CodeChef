package main
import "fmt"

func main(){
  var t,n,x,y,a,b int
  var pet, die float32
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&n,&x,&y,&a,&b)
    pet = x/a
    die = y/b
    if pet < die {
      fmt.Println("PETROL")
    } else if pet > die {
      fmt.Println("DIESEL")
    } else {
      fmt.Println("ANY")
    }
  }
}
