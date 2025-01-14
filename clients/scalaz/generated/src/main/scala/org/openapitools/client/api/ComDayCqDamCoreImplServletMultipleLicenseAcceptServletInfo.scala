package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo._

case class ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties])

object ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfoCodecJson: CodecJson[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo] = CodecJson.derive[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo]
  implicit val ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfoDecoder: EntityDecoder[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo] = jsonOf[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo]
  implicit val ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfoEncoder: EntityEncoder[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo] = jsonEncoderOf[ComDayCqDamCoreImplServletMultipleLicenseAcceptServletInfo]
}
