package main
import "fmt"

func main(){
  var t,x int 
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scanln(&x)
    if x<=100{
      fmt.Println(x)
    } else if x>100 && x<=1000{
      fmt.Println(x-25)
    } else if x>1000 && x<=5000{
      fmt.Println(x-100)
    } else if x>5000{
      fmt.Println(x-500)
    }
  }
}
