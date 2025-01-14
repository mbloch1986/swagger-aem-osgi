# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"replicate.comment.resourceTypes"
  ]

  @type t :: %__MODULE__{
    :"replicate.comment.resourceTypes" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"replicate.comment.resourceTypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

