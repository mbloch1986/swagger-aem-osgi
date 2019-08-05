package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo._

case class ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties])

object ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfoCodecJson: CodecJson[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo] = CodecJson.derive[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo]
  implicit val ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfoDecoder: EntityDecoder[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo] = jsonOf[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo]
  implicit val ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfoEncoder: EntityEncoder[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo] = jsonEncoderOf[ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplInfo]
}