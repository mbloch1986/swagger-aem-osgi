package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo._

case class ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties])

object ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfoCodecJson: CodecJson[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo] = CodecJson.derive[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo]
  implicit val ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfoDecoder: EntityDecoder[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo] = jsonOf[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo]
  implicit val ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfoEncoder: EntityEncoder[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo] = jsonEncoderOf[ComDayCqWcmCoreImplServletsContentfinderPageViewHandlerInfo]
}
