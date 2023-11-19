param(
    [string]$name="[name]"
)

Invoke-Expression "g++ .\$name.cpp"
Invoke-Expression ".\a.exe"


# Invoke-Expression "g++ -c calc.cpp"
# Invoke-Expression "g++ -shared -o calc.a calc.o"
# Invoke-Expression "g++ .\main.cpp calc.a"
# Invoke-Expression ".\a.exe"