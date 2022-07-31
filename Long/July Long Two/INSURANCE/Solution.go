package main
import "fmt"
func main(){
  var t,x,y int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&x,&y)
    if y <= x {
      fmt.Println(y)
    } else {
      fmt.Println(x)
    }
  }
}
