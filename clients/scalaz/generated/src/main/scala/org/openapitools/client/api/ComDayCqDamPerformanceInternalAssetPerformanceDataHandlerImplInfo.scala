package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo._

case class ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties])

object ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoCodecJson: CodecJson[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo] = CodecJson.derive[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo]
  implicit val ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoDecoder: EntityDecoder[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo] = jsonOf[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo]
  implicit val ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoEncoder: EntityEncoder[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo] = jsonEncoderOf[ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo]
}
