package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo._

case class ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties])

object ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfoCodecJson: CodecJson[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo] = CodecJson.derive[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo]
  implicit val ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfoDecoder: EntityDecoder[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo] = jsonOf[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo]
  implicit val ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfoEncoder: EntityEncoder[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo] = jsonEncoderOf[ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerInfo]
}
