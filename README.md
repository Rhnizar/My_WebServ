WebServ:

This endeavor has provided me with valuable insights into various aspects:
- Understanding the fundamental concept of a web server.
- Learning how Webserv efficiently handles multiple clients simultaneously.
- Exploring the process of sending and receiving requests and responses in web communication.
- Mastering the creation of responses that are compatible with web browsers.
- Understanding CGI (Common Gateway Interface) and knowing how it works.
- Gaining proficiency in configuring and adjusting the settings in the configuration file to tailor Webserv to our needs.
  
Regarding the way we worked on this project, most of our work was based on nginx as the config file is almost 70% similar to the nginx config file and its behavior, the most prominent diference between nginx and our webserv is that nginx uses one process and multithreading, meanwhile our webserv uses the same "one process" concept with a slightly different approach which lies in the usage of file descriptors and not using threads.

This project has been a fantastic learning journey, enhancing my understanding of web development.

How to use this project:

1- run Command "make"

2- Execute the program using "./webserv" if you want to use the default configuration file.
   Execute the program using "./webserv Path_Of_Config_file" if you want to execute
   the program using the configuration file you chose, for example "./webserv ConfigFiles/default.conf".

