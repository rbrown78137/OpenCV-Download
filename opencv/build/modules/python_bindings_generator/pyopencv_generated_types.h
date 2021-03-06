CVPY_TYPE(Algorithm, Algorithm, Ptr<cv::Algorithm>, Ptr, NoBase, 0);
CVPY_TYPE(AsyncArray, AsyncArray, Ptr<cv::AsyncArray>, Ptr, NoBase, pyopencv_cv_AsyncArray_AsyncArray);
CVPY_TYPE(ocl_Device, ocl_Device, cv::ocl::Device, Device, NoBase, pyopencv_cv_ocl_ocl_Device_Device);
CVPY_TYPE(FileStorage, FileStorage, Ptr<cv::FileStorage>, Ptr, NoBase, pyopencv_cv_FileStorage_FileStorage);
CVPY_TYPE(FileNode, FileNode, cv::FileNode, FileNode, NoBase, pyopencv_cv_FileNode_FileNode);
CVPY_TYPE(KeyPoint, KeyPoint, cv::KeyPoint, KeyPoint, NoBase, pyopencv_cv_KeyPoint_KeyPoint);
CVPY_TYPE(DMatch, DMatch, cv::DMatch, DMatch, NoBase, pyopencv_cv_DMatch_DMatch);
CVPY_TYPE(TickMeter, TickMeter, Ptr<cv::TickMeter>, Ptr, NoBase, pyopencv_cv_TickMeter_TickMeter);
CVPY_TYPE(UMat, UMat, Ptr<cv::UMat>, Ptr, NoBase, pyopencv_cv_UMat_UMat);
CVPY_TYPE(GeneralizedHough, GeneralizedHough, Ptr<cv::GeneralizedHough>, Ptr, Algorithm, 0);
CVPY_TYPE(GeneralizedHoughBallard, GeneralizedHoughBallard, Ptr<cv::GeneralizedHoughBallard>, Ptr, GeneralizedHough, 0);
CVPY_TYPE(GeneralizedHoughGuil, GeneralizedHoughGuil, Ptr<cv::GeneralizedHoughGuil>, Ptr, GeneralizedHough, 0);
CVPY_TYPE(CLAHE, CLAHE, Ptr<cv::CLAHE>, Ptr, Algorithm, 0);
CVPY_TYPE(Subdiv2D, Subdiv2D, Ptr<cv::Subdiv2D>, Ptr, NoBase, pyopencv_cv_Subdiv2D_Subdiv2D);
CVPY_TYPE(LineSegmentDetector, LineSegmentDetector, Ptr<cv::LineSegmentDetector>, Ptr, Algorithm, 0);
CVPY_TYPE(ml_ParamGrid, ml_ParamGrid, Ptr<cv::ml::ParamGrid>, Ptr, NoBase, 0);
CVPY_TYPE(ml_TrainData, ml_TrainData, Ptr<cv::ml::TrainData>, Ptr, NoBase, 0);
CVPY_TYPE(ml_StatModel, ml_StatModel, Ptr<cv::ml::StatModel>, Ptr, Algorithm, 0);
CVPY_TYPE(ml_NormalBayesClassifier, ml_NormalBayesClassifier, Ptr<cv::ml::NormalBayesClassifier>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_KNearest, ml_KNearest, Ptr<cv::ml::KNearest>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_SVM, ml_SVM, Ptr<cv::ml::SVM>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_EM, ml_EM, Ptr<cv::ml::EM>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_DTrees, ml_DTrees, Ptr<cv::ml::DTrees>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_RTrees, ml_RTrees, Ptr<cv::ml::RTrees>, Ptr, ml_DTrees, 0);
CVPY_TYPE(ml_Boost, ml_Boost, Ptr<cv::ml::Boost>, Ptr, ml_DTrees, 0);
CVPY_TYPE(ml_ANN_MLP, ml_ANN_MLP, Ptr<cv::ml::ANN_MLP>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_LogisticRegression, ml_LogisticRegression, Ptr<cv::ml::LogisticRegression>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_SVMSGD, ml_SVMSGD, Ptr<cv::ml::SVMSGD>, Ptr, ml_StatModel, 0);
CVPY_TYPE(ml_ANN_MLP_ANNEAL, ml_ANN_MLP_ANNEAL, Ptr<cv::ml::ANN_MLP_ANNEAL>, Ptr, ml_ANN_MLP, 0);
CVPY_TYPE(Tonemap, Tonemap, Ptr<cv::Tonemap>, Ptr, Algorithm, 0);
CVPY_TYPE(TonemapDrago, TonemapDrago, Ptr<cv::TonemapDrago>, Ptr, Tonemap, 0);
CVPY_TYPE(TonemapReinhard, TonemapReinhard, Ptr<cv::TonemapReinhard>, Ptr, Tonemap, 0);
CVPY_TYPE(TonemapMantiuk, TonemapMantiuk, Ptr<cv::TonemapMantiuk>, Ptr, Tonemap, 0);
CVPY_TYPE(AlignExposures, AlignExposures, Ptr<cv::AlignExposures>, Ptr, Algorithm, 0);
CVPY_TYPE(AlignMTB, AlignMTB, Ptr<cv::AlignMTB>, Ptr, AlignExposures, 0);
CVPY_TYPE(CalibrateCRF, CalibrateCRF, Ptr<cv::CalibrateCRF>, Ptr, Algorithm, 0);
CVPY_TYPE(CalibrateDebevec, CalibrateDebevec, Ptr<cv::CalibrateDebevec>, Ptr, CalibrateCRF, 0);
CVPY_TYPE(CalibrateRobertson, CalibrateRobertson, Ptr<cv::CalibrateRobertson>, Ptr, CalibrateCRF, 0);
CVPY_TYPE(MergeExposures, MergeExposures, Ptr<cv::MergeExposures>, Ptr, Algorithm, 0);
CVPY_TYPE(MergeDebevec, MergeDebevec, Ptr<cv::MergeDebevec>, Ptr, MergeExposures, 0);
CVPY_TYPE(MergeMertens, MergeMertens, Ptr<cv::MergeMertens>, Ptr, MergeExposures, 0);
CVPY_TYPE(MergeRobertson, MergeRobertson, Ptr<cv::MergeRobertson>, Ptr, MergeExposures, 0);
CVPY_TYPE(BackgroundSubtractor, BackgroundSubtractor, Ptr<cv::BackgroundSubtractor>, Ptr, Algorithm, 0);
CVPY_TYPE(BackgroundSubtractorMOG2, BackgroundSubtractorMOG2, Ptr<cv::BackgroundSubtractorMOG2>, Ptr, BackgroundSubtractor, 0);
CVPY_TYPE(BackgroundSubtractorKNN, BackgroundSubtractorKNN, Ptr<cv::BackgroundSubtractorKNN>, Ptr, BackgroundSubtractor, 0);
CVPY_TYPE(KalmanFilter, KalmanFilter, Ptr<cv::KalmanFilter>, Ptr, NoBase, pyopencv_cv_KalmanFilter_KalmanFilter);
CVPY_TYPE(DenseOpticalFlow, DenseOpticalFlow, Ptr<cv::DenseOpticalFlow>, Ptr, Algorithm, 0);
CVPY_TYPE(SparseOpticalFlow, SparseOpticalFlow, Ptr<cv::SparseOpticalFlow>, Ptr, Algorithm, 0);
CVPY_TYPE(DualTVL1OpticalFlow, DualTVL1OpticalFlow, Ptr<cv::DualTVL1OpticalFlow>, Ptr, DenseOpticalFlow, 0);
CVPY_TYPE(FarnebackOpticalFlow, FarnebackOpticalFlow, Ptr<cv::FarnebackOpticalFlow>, Ptr, DenseOpticalFlow, 0);
CVPY_TYPE(SparsePyrLKOpticalFlow, SparsePyrLKOpticalFlow, Ptr<cv::SparsePyrLKOpticalFlow>, Ptr, SparseOpticalFlow, 0);
CVPY_TYPE(dnn_DictValue, dnn_DictValue, Ptr<cv::dnn::DictValue>, Ptr, NoBase, pyopencv_cv_dnn_dnn_DictValue_DictValue);
CVPY_TYPE(dnn_Layer, dnn_Layer, Ptr<cv::dnn::Layer>, Ptr, Algorithm, 0);
CVPY_TYPE(dnn_Net, dnn_Net, cv::dnn::Net, Net, NoBase, pyopencv_cv_dnn_dnn_Net_Net);
CVPY_TYPE(Feature2D, Feature2D, Ptr<cv::Feature2D>, Ptr, NoBase, 0);
CVPY_TYPE(AffineFeature, AffineFeature, Ptr<cv::AffineFeature>, Ptr, Feature2D, 0);
CVPY_TYPE(SIFT, SIFT, Ptr<cv::SIFT>, Ptr, Feature2D, 0);
CVPY_TYPE(BRISK, BRISK, Ptr<cv::BRISK>, Ptr, Feature2D, 0);
CVPY_TYPE(ORB, ORB, Ptr<cv::ORB>, Ptr, Feature2D, 0);
CVPY_TYPE(MSER, MSER, Ptr<cv::MSER>, Ptr, Feature2D, 0);
CVPY_TYPE(FastFeatureDetector, FastFeatureDetector, Ptr<cv::FastFeatureDetector>, Ptr, Feature2D, 0);
CVPY_TYPE(AgastFeatureDetector, AgastFeatureDetector, Ptr<cv::AgastFeatureDetector>, Ptr, Feature2D, 0);
CVPY_TYPE(GFTTDetector, GFTTDetector, Ptr<cv::GFTTDetector>, Ptr, Feature2D, 0);
CVPY_TYPE(SimpleBlobDetector, SimpleBlobDetector, Ptr<cv::SimpleBlobDetector>, Ptr, Feature2D, 0);
CVPY_TYPE(SimpleBlobDetector_Params, SimpleBlobDetector_Params, cv::SimpleBlobDetector::Params, Params, NoBase, pyopencv_cv_SimpleBlobDetector_Params_SimpleBlobDetector_Params);
CVPY_TYPE(KAZE, KAZE, Ptr<cv::KAZE>, Ptr, Feature2D, 0);
CVPY_TYPE(AKAZE, AKAZE, Ptr<cv::AKAZE>, Ptr, Feature2D, 0);
CVPY_TYPE(DescriptorMatcher, DescriptorMatcher, Ptr<cv::DescriptorMatcher>, Ptr, Algorithm, 0);
CVPY_TYPE(BFMatcher, BFMatcher, Ptr<cv::BFMatcher>, Ptr, DescriptorMatcher, pyopencv_cv_BFMatcher_BFMatcher);
CVPY_TYPE(FlannBasedMatcher, FlannBasedMatcher, Ptr<cv::FlannBasedMatcher>, Ptr, DescriptorMatcher, pyopencv_cv_FlannBasedMatcher_FlannBasedMatcher);
CVPY_TYPE(BOWTrainer, BOWTrainer, Ptr<cv::BOWTrainer>, Ptr, NoBase, 0);
CVPY_TYPE(BOWKMeansTrainer, BOWKMeansTrainer, Ptr<cv::BOWKMeansTrainer>, Ptr, BOWTrainer, pyopencv_cv_BOWKMeansTrainer_BOWKMeansTrainer);
CVPY_TYPE(BOWImgDescriptorExtractor, BOWImgDescriptorExtractor, Ptr<cv::BOWImgDescriptorExtractor>, Ptr, NoBase, pyopencv_cv_BOWImgDescriptorExtractor_BOWImgDescriptorExtractor);
CVPY_TYPE(HistogramCostExtractor, HistogramCostExtractor, Ptr<cv::HistogramCostExtractor>, Ptr, Algorithm, 0);
CVPY_TYPE(NormHistogramCostExtractor, NormHistogramCostExtractor, Ptr<cv::NormHistogramCostExtractor>, Ptr, HistogramCostExtractor, 0);
CVPY_TYPE(EMDHistogramCostExtractor, EMDHistogramCostExtractor, Ptr<cv::EMDHistogramCostExtractor>, Ptr, HistogramCostExtractor, 0);
CVPY_TYPE(ChiHistogramCostExtractor, ChiHistogramCostExtractor, Ptr<cv::ChiHistogramCostExtractor>, Ptr, HistogramCostExtractor, 0);
CVPY_TYPE(EMDL1HistogramCostExtractor, EMDL1HistogramCostExtractor, Ptr<cv::EMDL1HistogramCostExtractor>, Ptr, HistogramCostExtractor, 0);
CVPY_TYPE(ShapeDistanceExtractor, ShapeDistanceExtractor, Ptr<cv::ShapeDistanceExtractor>, Ptr, Algorithm, 0);
CVPY_TYPE(ShapeContextDistanceExtractor, ShapeContextDistanceExtractor, Ptr<cv::ShapeContextDistanceExtractor>, Ptr, ShapeDistanceExtractor, 0);
CVPY_TYPE(HausdorffDistanceExtractor, HausdorffDistanceExtractor, Ptr<cv::HausdorffDistanceExtractor>, Ptr, ShapeDistanceExtractor, 0);
CVPY_TYPE(ShapeTransformer, ShapeTransformer, Ptr<cv::ShapeTransformer>, Ptr, Algorithm, 0);
CVPY_TYPE(ThinPlateSplineShapeTransformer, ThinPlateSplineShapeTransformer, Ptr<cv::ThinPlateSplineShapeTransformer>, Ptr, ShapeTransformer, 0);
CVPY_TYPE(AffineTransformer, AffineTransformer, Ptr<cv::AffineTransformer>, Ptr, ShapeTransformer, 0);
CVPY_TYPE(VideoCapture, VideoCapture, Ptr<cv::VideoCapture>, Ptr, NoBase, pyopencv_cv_VideoCapture_VideoCapture);
CVPY_TYPE(VideoWriter, VideoWriter, Ptr<cv::VideoWriter>, Ptr, NoBase, pyopencv_cv_VideoWriter_VideoWriter);
CVPY_TYPE(CirclesGridFinderParameters, CirclesGridFinderParameters, cv::CirclesGridFinderParameters, CirclesGridFinderParameters, NoBase, pyopencv_cv_CirclesGridFinderParameters_CirclesGridFinderParameters);
CVPY_TYPE(CirclesGridFinderParameters2, CirclesGridFinderParameters2, cv::CirclesGridFinderParameters2, CirclesGridFinderParameters2, CirclesGridFinderParameters, pyopencv_cv_CirclesGridFinderParameters2_CirclesGridFinderParameters2);
CVPY_TYPE(StereoMatcher, StereoMatcher, Ptr<cv::StereoMatcher>, Ptr, Algorithm, 0);
CVPY_TYPE(StereoBM, StereoBM, Ptr<cv::StereoBM>, Ptr, StereoMatcher, 0);
CVPY_TYPE(StereoSGBM, StereoSGBM, Ptr<cv::StereoSGBM>, Ptr, StereoMatcher, 0);
CVPY_TYPE(BaseCascadeClassifier, BaseCascadeClassifier, Ptr<cv::BaseCascadeClassifier>, Ptr, Algorithm, 0);
CVPY_TYPE(CascadeClassifier, CascadeClassifier, Ptr<cv::CascadeClassifier>, Ptr, NoBase, pyopencv_cv_CascadeClassifier_CascadeClassifier);
CVPY_TYPE(HOGDescriptor, HOGDescriptor, Ptr<cv::HOGDescriptor>, Ptr, NoBase, pyopencv_cv_HOGDescriptor_HOGDescriptor);
CVPY_TYPE(QRCodeDetector, QRCodeDetector, Ptr<cv::QRCodeDetector>, Ptr, NoBase, pyopencv_cv_QRCodeDetector_QRCodeDetector);
CVPY_TYPE(Stitcher, Stitcher, Ptr<cv::Stitcher>, Ptr, NoBase, 0);
