#ifndef QGPHOTOIMAGECAPTURECONTROL_H
#define QGPHOTOIMAGECAPTURECONTROL_H

#include <QObject>
#include <QCameraImageCaptureControl>


class QGPhotoImageCaptureControl : public QCameraImageCaptureControl
{
    Q_OBJECT
public:
    explicit QGPhotoImageCaptureControl(QObject *parent = 0);

signals:

public slots:

};

#endif // QGPHOTOIMAGECAPTURECONTROL_H