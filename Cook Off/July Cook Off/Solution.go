package main
import "fmt"

func main(){
	var t,n,x,y int
	fmt.Scanln(&t)
	for i:=0;i<t;i++ {
	    fmt.Scan(&n,&x,&y)
	    if x + y*2 <= n{
	        fmt.Println("YES")
	    } else{
	        fmt.Println("NO")
	    }
	}
	fmt.Println("")
}
