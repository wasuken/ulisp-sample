(defun b (x)
  (pinmode 13 t)
  (digitalwrite 13 x)
  (delay 1000)
  (b (not x)))

(b t)
