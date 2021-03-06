#ifndef QGPHOTOCAPTURESERVICE_H
#define QGPHOTOCAPTURESERVICE_H

#include <QObject>
#include <QMediaService>
#include <QMediaControl>

#include "qgphotoimagecapturecontrol.h"
#include "qgphotocameracontrol.h"
#include "qgphotovideoinputdevicecontrol.h"
#include "qgphotovideorenderercontrol.h"
#include "qgphotocameraexposurecontrol.h"

class QGPhotoCaptureService : public QMediaService
{
    Q_OBJECT
public:
    QGPhotoCaptureService(const QString &service, QObject *parent = 0);

    virtual ~QGPhotoCaptureService();

    QMediaControl *requestControl(const char *name);
    void releaseControl(QMediaControl *);

private:
    QGPhotoCaptureSession *m_captureSession;
    QGPhotoImageCaptureControl *m_imageCaptureControl;
    QGPhotoCameraControl *m_cameraControl;
    QGPhotoVideoInputDeviceControl *m_videoInputDevice;
    QGPhotoVideoRendererControl *m_videoRenderer;
    QGPhotoCameraExposureControl *m_exposureControl;

signals:

public slots:

};

#endif // QGPHOTOCAPTURESERVICE_H
