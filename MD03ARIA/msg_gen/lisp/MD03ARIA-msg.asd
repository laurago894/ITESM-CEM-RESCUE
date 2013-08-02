
(cl:in-package :asdf)

(defsystem "MD03ARIA-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Reg" :depends-on ("_package_Reg"))
    (:file "_package_Reg" :depends-on ("_package"))
  ))