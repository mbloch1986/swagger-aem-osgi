package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo._

case class ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo {
  import DateTimeCodecs._

  implicit val ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfoCodecJson: CodecJson[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo] = CodecJson.derive[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo]
  implicit val ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfoDecoder: EntityDecoder[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo] = jsonOf[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo]
  implicit val ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfoEncoder: EntityEncoder[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo] = jsonEncoderOf[ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerInfo]
}