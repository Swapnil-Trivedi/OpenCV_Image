This is more about understanding than implementing.
##### Blending
###### Blending is combining of two or more pictures together to generate a new image
Ever wondered how Photoshop is able to mix multiple images together and form a composite ???
well this is a very basic version of how it works. 
#### Fundamentals
Before proceedinig there are some things we need to understand
- The images can be represented as arrangements of combinations of pixels
- We can also say that an image is a special function for a pixel, hence every image is different from each other

let's take an example :
Image 1 be : `f(X)`
Image 2 be : `h(X)`
in order to add this two images we can say that `g(X) = f(X) + h(X)`
but that won't do simply because practically thinking if we place Image 1 on image 2 without adding any transperency factor, we will only be able to see the image on top.

In Image processing the problem is solved by adding alpha
`g(X)=A.f(X)+(1-A).h(X) + gamma`
- A - A or Alpha is the degree of translucency and have a value between 0-1 so naturally our blended image will be a mix of two transperent images
- gamma is correction factor used for luminous correction generally 0.0 
 
#### Important things to note
- The images to be blended should be of same size and dimensions
in our main.cpp we will be adding image of a Blue circle with Yellow Circle in order to generate a Green Circle
