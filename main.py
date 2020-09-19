import tensorflow as tf
input = tf.keras.Input(shape=(2,))
output = tf.keras.layers.Dense(1)(input)
model = tf.keras.Model(inputs=input, outputs=output)
model.save("model.h5")
