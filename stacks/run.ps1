
# Write-Host 'terminal '

Invoke-Expression "g++ -c calc.cpp"
Invoke-Expression "g++ -shared -o calc.a calc.o"
Invoke-Expression "g++ .\main.cpp calc.a"
Invoke-Expression ".\a.exe"

