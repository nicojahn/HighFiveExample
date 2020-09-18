import tensorflow as tf
input = tf.keras.Input(shape=(20,25))
x = tf.keras.layers.Dense(10, activation=tf.nn.relu)(input)
output = tf.keras.layers.Dense(5, activation=tf.nn.softmax)(x)
model = tf.keras.Model(inputs=input, outputs=output)
model.save("model.h5")
