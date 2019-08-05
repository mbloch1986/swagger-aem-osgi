package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo._

case class ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties])

object ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfoCodecJson: CodecJson[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo] = CodecJson.derive[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo]
  implicit val ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfoDecoder: EntityDecoder[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo] = jsonOf[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo]
  implicit val ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfoEncoder: EntityEncoder[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo] = jsonEncoderOf[ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobInfo]
}