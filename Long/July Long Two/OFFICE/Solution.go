package main
import "fmt"

func main(){
  var t,x,y,work int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&x,&y)
    work = x*4 + y
    fmt.Println(work)
  }
}
