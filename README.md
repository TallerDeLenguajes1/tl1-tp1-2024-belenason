## TP1
### Ejercicio 2.a 
El archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto, y así no sean rastreados.
Es conveniente usarlo porque evita que se suban archivos innecesarios al repositorio remoto que ocupan lugar o que entorpecen el trabajo. 
Se debe hacer cuando nos encontramos con artefactos de compilación y archivos generados por el equipo que pueden derivarse de tu fuente de repositorios o que no deberían confirmarse por algún otro motivo (como un archivo donde tengas contraseñas de configuración ya sea de correo electrónico u otras configuraciones de servidor), además de que ocuparían lugar innecesariamente en este. 
Algunos ejemplos son:
- Cachés de dependencias, como es el caso del contenido de /node_modules o /packages.
- Código compilado como, por ejemplo, los archivos .o, .pyc y .class.
- Directorios de salida de compilación, como es el caso de /bin, /out o /target.
- Archivos generados en tiempo de ejecución como, por ejemplo, .log, .lock o .tmp.
- Archivos ocultos del sistema, como es el caso de .DS_Store o Thumbs.db.
- Archivos personales de configuración de IDE como, por ejemplo, .idea/workspace.xml.
Para configurar el archivo gitignore creo un archivo de texto y le asigno el nombre ".gitignore" y le voy agregando en lineas diferentes las carpetas y archivos que desee que sean ignorados.   
Las entradas de este archivo también pueden seguir un patrón coincidente:
- "*" se utiliza como una coincidencia comodín.
- "/" se usa para ignorar las rutas relativas al archivo .gitignore.
- "#" es usado para agregar comentarios

### Ejercicio 3.e 
Veo una carpeta con archivos de visual studio code que están relacionados con el compilador, y el ejecutable que se generó de "tp1_1" también considero que no es necesario.