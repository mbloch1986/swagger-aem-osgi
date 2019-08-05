package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo._

case class ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfoCodecJson: CodecJson[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo] = CodecJson.derive[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo]
  implicit val ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfoDecoder: EntityDecoder[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo] = jsonOf[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo]
  implicit val ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfoEncoder: EntityEncoder[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo] = jsonEncoderOf[ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryInfo]
}