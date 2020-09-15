# Micro Speech Example

This example runs a [Tensorflow Lite](https://www.tensorflow.org/lite/guide) machine learning model that can recognize two keywords ("yes" and "no") from speech data.

The application listens to its surroundings with the on-board microphone and indicates the detection of a word by output to an LED and displaying data on the serial console (via the DAPLink).


## Build and Run the example

The following instructions will help you build and deploy the example.

1. Connect the i.MXRT1064-EVK to your computer via the J41 Micro-USB connector. The board should be recognized automatically by the IDE as the **Target**.

2. Use the **Play** button to build and run the program on the target.

3. Test the application by saying the two keywords.

4. Observe the output on the serial console **_EVK-MIMXRT1064**:

   ![_EVK-MIMXRT1064 Output](evk-mimxrt1064-output.png)


## Micro Speech Training

The example can be retrained to recognize different words. Refer to [Micro Speech Training](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/lite/micro/examples/micro_speech/train) for more information.

This page also contains further information on how the speech input is processed.
