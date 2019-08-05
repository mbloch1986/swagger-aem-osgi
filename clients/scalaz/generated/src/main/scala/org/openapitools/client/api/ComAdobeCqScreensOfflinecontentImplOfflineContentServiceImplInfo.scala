package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo._

case class ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties])

object ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfoCodecJson: CodecJson[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo] = CodecJson.derive[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo]
  implicit val ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfoDecoder: EntityDecoder[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo] = jsonOf[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo]
  implicit val ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfoEncoder: EntityEncoder[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo] = jsonEncoderOf[ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplInfo]
}