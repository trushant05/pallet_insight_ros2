# Dataset Acquisition and Preparation

<div style="display: flex; justify-content: space-around; align-items: flex-start; gap: 20px;">
  <figure>
      <img src="../assets/img/detection_ds.png" alt="Detection Dataset" width="400">
      <figcaption>Object Detection Dataset <a href="https://universe.roboflow.com/experimental-ksz9k/pallet-insight">[Roboflow]</a></figcaption>
  </figure>
  <figure>
      <img src="../assets/img/semantic_ds.png" alt="Segmentation Dataset" width="400">
      <figcaption>Instance Segmentation Dataset <a href="https://universe.roboflow.com/experimental-ksz9k/pallet-insight-rfsrt/dataset/1">[Roboflow]</a></figcaption>
  </figure>
  </div>

## Step 1: Annotate Dataset

<div class="justified-content">
The Pallet Dataset contains 519 images, which were annotated as the first step. To expedite the labeling process, I used auto-labeling with Grounding DINO, integrated directly in Roboflow for object detection dataset and SAM2 for segmentation dataset, which significantly improved efficiency.
</div>

<div class="justified-content">
Note: While Grounding DINO performed well in identifying the ground, it encountered challenges in accurately labeling pallets. It often inferred both the pallet and the payload as a single entity. For SAM2, while it is near to accurate for gound I found using basic polygon tool more efficient for pallets.
</div>


## Step 2: Dataset Split

For the initial testing phase, the dataset was split as follows:

- Training: 70%
- Validation: 20%
- Testing: 10%

Note: In the future, we aim to implement k-fold cross-validation for more robust model evaluation.


## Step 3: Data Augmentation

Using the dataset export feature, the 519 images were augmented with the following parameter variations:

- Saturation: Between -25% to +25%
- Brightness: Between -25% to +25%
- Exposure: Between -15% to +15%

<div class="justified-content">
Note: These ranges were set to the maximum permissible limits before Roboflow suggested adjustments, to establish a baseline model. Future enhancements may involve additional augmentation to improve model robustness.
</div>

## Step 4: Dataset for Training

Dataset consists following distribution:

- Training set: 1092
- Validation set: 103
- Test set: 52 


