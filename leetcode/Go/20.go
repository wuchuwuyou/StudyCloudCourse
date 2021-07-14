package main
import (
	"strings"
)
	

func isValid(s string) bool {
	len := len(s) / 2
	s1 := s
	for len > 0 {
		s1 = strings.ReplaceAll(s1,"{}","")
		s1 = strings.ReplaceAll(s1,"()","")
		s1 = strings.ReplaceAll(s1,"[]","")
		len--
	}
	if s1 == "" {
		return true
	} 

	return false
}

func main () {
	s := "[]({}){([])}"
	res := isValid(s)
	println(res)
}